/*
-fifo buffer
By Yaren AKIN
22.02.2022
*/

#include <iostream>
#include <memory>

using namespace std;

template <class T> class Circular_Buffer {
private:
    std::unique_ptr<T[]> buffer;                 
    size_t count_write = 0;   //        
    size_t count_read = 0;    //
    size_t buffer_size;
    size_t freespace;

public:

    Circular_Buffer<T>(size_t buffer_size)
        : buffer(std::unique_ptr<T[]>(new T[buffer_size])), buffer_size(buffer_size) {
            freespace = buffer_size - 1;  
    };

    void write(T item) {
        if (is_full() == false)
        {
            buffer[count_write] = item;
            count_write = (count_write + 1) % buffer_size;
            freespace--;
        }
        else if(is_full() == true) {
            cout << "BUFFER DOLU!"<<"\n";
        }
    }

    T read() {
        if (is_empty() == false)
        {
            T item = buffer[count_read];
            count_read = (count_read + 1) % buffer_size;
            freespace++;
            return item;
        }

        else if (is_empty() == true)
        {
            cout << "BUFFER BOS!" << "\n";
        }
    }
    
    //ne kadar boş alan kaldığını gösterir 
    size_t fifoGetFreeSpace() 
    {
        return freespace + 1;
    }
  
    // buffer boşsa is_empty true olacak değilse false.
    bool is_empty() { return fifoGetFreeSpace() == buffer_size;}
       
    // buffer doluysa is_full true olacak değilse false.
    bool is_full() { return fifoGetFreeSpace() - 1 == 0; }

    // buffer boyutunu bulma
    size_t size() {
      //yazdığım veri okuduğum veriden büyük ve eşitse okuduğum veriden yazdığım veriyi çıkarıp boyutu buluyorum.
        if (count_write >= count_read)
        { return count_write - count_read; }
        //eğer okuduğum veri eşit veya büyük değilse toplam boyuttan okuduğum ve yazdığım veriyi çıkarıp boyutu buluyorum.
        return buffer_size - count_read - count_write;
    }
};

int main()
{	
    Circular_Buffer<uint32_t> cb(10);
    printf("\n === CircularBuffer Test ===\n");
    printf("Size: %zu\n", cb.size());
    
    for (int i = 0; i < 9; i++)
    {
        cb.write(i);
        cout<<"Okunan Veri: "<<cb.read() <<"\n";
    }

    printf("Size: %zu\n", cb.size());

	return 0;
}


