#include"Worker.h"

Worker::Worker(std::string& full_name, std::string& post, int& year_of_admission)
{
	this->full_name_ = full_name;
	this->post_ = post;
	this->year_of_admission_ = year_of_admission;
}
Worker::Worker()
{
	std::cout << "������ ����������� �� ��������� Worker\n";
	full_name_ = "";
	post_ = "";
	year_of_admission_ = 0;
}

Worker::Worker(Worker& copy)
{
	std::cout << "������ ����������� ����������� Worker\n";
	*this = copy;
}

Worker::~Worker()
{
	std::cout << "������ ���������� Worker\n";
}

std::string Worker::GetFullName()
{
	return this->full_name_;
}

int Worker::GetYearOfAdmission()
{
	return this->year_of_admission_;
}

std::string Worker::GetPost()
{
	return this->post_;
}

void Worker::SetFullName(std::string full_name)
{
	this->full_name_ = full_name;
}

void Worker::SetYearOfAdmission(int year_of_admission)
{
	this->year_of_admission_ = year_of_admission;
}

void Worker::SetPost(std::string post)
{
	this->post_ = post;
}

Worker& Worker::operator=(Worker& copy)
{
	this->full_name_ = copy.full_name_;
	this->post_ = copy.post_;
	this->year_of_admission_ = copy.year_of_admission_;
	return *this;
}

std::istream& operator>>(std::istream& in, Worker& object)
{
	setlocale(LC_ALL, "russian");
	std::cout << "Enter the data\n";
	std::cout << "���: ";
	getchar();
	std::getline(std::cin, object.full_name_);
	std::cout << "���������: ";
	std::getline(std::cin, object.post_);
	int check, this_year = 2023;
	while (1)
	{
		std::cout << "��� ����������� �� ������: ";

		if (std::cin >> check)
		{
			if (check > 0 && check <= this_year)
			{
				object.year_of_admission_ = check;
				getchar();
				break;
			}
		}
		else
		{
			std::cout << "Incorrect value\n";
			std::cin.clear();
			std::cin.ignore(1024, '\n');
		}
	}
	return in;
}

std::ostream& operator<<(std::ostream& out, Worker& object)
{
	setlocale(LC_ALL, "russian");
	out << "���: " << object.full_name_ << std::endl;
	out << "���������: " << object.post_ << std::endl;
	out << "��� ����������� �� ������: " << object.year_of_admission_ << std::endl;
	return out;
}