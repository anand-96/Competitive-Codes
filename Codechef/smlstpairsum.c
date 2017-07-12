
  #include <stdio.h>
  #include <stdlib.h>

  #define HEAPCOUNT 1000000
  int count = 0;
  int insertHeap(int *data, int low, int count) {
        int pos = (2 * low) + 1, current = data[low];
        while (pos <= count) {
                if (pos < count && data[pos] > data[pos + 1])
                        pos++;
                if (current <= data[pos])
                        break;
                else {
                        data[low] = data[pos];
                        low = pos;
                        pos = (2 * low) + 1;
                }
        }
        data[low] = current;
        return 0;
  }

int buildHeap(int *data, int n) {
        int low;
        for (low = n/2 - 1; low >= 0; low--) {
                insertHeap(data, low, n-1);
        }
        return 0;
  }

  int buildUp(int *data, int index) {
        int val = data[index];
        while (data[(index - 1) / 2] >= val) {
                data[index] = data[(index - 1) / 2];
                if (!index)
                        break;
                index = (index - 1) / 2;
        }
        data[index] = val;
        return 0;
  }

  int addNode(int *data, int val, int n) {
        data[n] = val;
        buildUp(data, n);
        return 0;
  }
  int display(int *data, int n) {
        int i;
        for (i = 0; i <= n; i++) {
                printf("%d ", data[i]);
        }
        printf("\n\n");
        return 0;
  }

  int main() {
        int n,T,k, i, *data, temp, ch, val;
        data = (int *)malloc(sizeof(int) * HEAPCOUNT);
             scanf("%d", &T);
           if(T>100000)
              exit(1);
             for(k=0;k<T;k++){
        scanf("%d", &n);
        if(n>100000||n<2)
        exit(1);
      for (i = 0; i < n; i++) {
         scanf("%d", &data[i]);
      // data[i]=rand()%1000;
       if(data[i]>1000000||data[i]<1)
          exit(1);
                count++;
        }
        buildHeap(data, n);
        display(data, n);
        for (i = n-1; i > 0; i--) {
                temp = data[i];
                data[i] = data[0];
                data[0] = temp;
                insertHeap(data, 0, i - 1);
        }
        for (i = 0; i < n; i++)
                printf("%d ", data[i]);
        printf("\n%d\n",data[n-2]+data[n-1]);
  }
  return 0;
  }