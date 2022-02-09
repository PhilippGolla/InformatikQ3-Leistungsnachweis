#pragma once

class ByteBuffer {
private:
	char bytebuffer[];
	int leseposition;
	int laenge;
public:
	ByteBuffer(int a);
	static ByteBuffer allocate(int n);
	static ByteBuffer wrap(char[]);
	void put(char b);
	void put(int index, char b);
	void put(char src[], int offset, int length);
	void putInt(int value);
	void rewind();
	char* array();
	bool equals(ByteBuffer bb);
	int getInt();
};