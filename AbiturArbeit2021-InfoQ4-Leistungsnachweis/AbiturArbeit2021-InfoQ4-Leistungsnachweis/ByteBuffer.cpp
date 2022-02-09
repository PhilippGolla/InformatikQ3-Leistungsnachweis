#include "ByteBuffer.h"
#include ByteBuffer.h

class ByteBuffer {
	int leseposition = 0;
	char bytebuffer[7] = { 0,0,0,0,0,0,0 };
	int laenge = 0;
};

ByteBuffer::ByteBuffer(int a)
{
	new ByteBuffer abc;
	char[a] temp;
	for (int b = 0; b <= a; b++) {
		temp[b] = 0;
	};
	abc->bytebuffer = temp;
	abc->laenge = a;
}

ByteBuffer ByteBuffer::allocate(int n)
{
	return new ByteBuffer(n);
}

ByteBuffer ByteBuffer::wrap(char b[])
{
	new ByteBuffer(sizeof(b)) c;
	for (int i = 0; i <= sizeof(b); i++) {
		c[i] = b[i];
	}
	return c;
}

void ByteBuffer::put(char b)
{

}

void ByteBuffer::put(int index, char b)
{
}

void ByteBuffer::put(char src[], int offset, int length)
{
}

void ByteBuffer::putInt(int value)
{
}

void ByteBuffer::rewind()
{
	leseposition = 0;
}

char* ByteBuffer::array()
{
	return bytebuffer;
}

bool ByteBuffer::equals(ByteBuffer bb)
{
	for () {
		if (a.array[i] != b.array[i]) {
			return false;
		}
	}
	return true;
}

int ByteBuffer::getInt()
{
	int a;
	for (int i = 0; i <= 4;) {
		a += bytebuffer[leseposition + i];
		i++
	}
	return a;
}
