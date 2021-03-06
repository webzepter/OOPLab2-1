#include "Document.h"

const int Document::fullSize() const
{
	int sum = 0;
	for(auto it = begin(); it != end(); ++it)
		sum += it->fullSize();
	return sum;
}

std::istream &operator>>(std::istream &stream, Document &document)
{
	Paragraph paragraph;
	while (stream >> paragraph)
		document.push_back(paragraph);
	return stream;
}

std::ostream &operator<<(std::ostream &stream, Document &document)
{
	for(auto it = document.begin(); it != document.end(); ++it)
		stream << *it;
	return stream;
}

Document Document::copy(int fromIndex, int toIndex)
{
	Document newDocument;
	for (auto it = begin(); it != end(); ++it)
	{
		//if (*it < fromIndex)
		//{

		//}
	}
	return newDocument;
}

Document Document::cut(int fromIndex, int toIndex)
{
	Document newDocument(copy(fromIndex, toIndex));
	remove(fromIndex, toIndex);
	return newDocument;
}

void Document::remove(int fromIndex, int toIndex)
{
}