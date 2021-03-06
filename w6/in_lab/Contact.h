#ifndef SICT_CONTACT_H
#define SICT_CONTACT_H

namespace sict {
	class Contact {
		char name[20];
		long long* number;
		int no;

		bool isValid(long long num) const;
	public:
		Contact();
		Contact(const char customerName[], const long long phoneNumber[], int num);
		~Contact();

		
		bool isEmpty() const;
		void display() const;

	};
}

#endif // !SICT_CONTACT_H
