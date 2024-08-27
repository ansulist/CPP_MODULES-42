#include "Serializer.hpp"

int main()
{
	Data data;
	data.name = "just anita";
	data.num = 129;
	
	uintptr_t serializedValue = Serializer::serialize(&data);
	
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "serializedValue  : " << serializedValue << std::endl;
	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	
	Data *deserializedValue = Serializer::deserialize(serializedValue);

	std::cout << "-----------------------------------------------------------------------------" << std::endl;
	std::cout << "&data            : " << &data << std::endl;
	std::cout << "deserializeValue : " << deserializedValue << std::endl;
	std::cout << "DATA TITLE " <<deserializedValue->name << std::endl;
	std::cout << "DATA NUM " <<deserializedValue->num << std::endl;

	return (0);
}