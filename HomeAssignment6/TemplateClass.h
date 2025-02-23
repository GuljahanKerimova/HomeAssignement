#ifndef TEMPLATECLASS_H
#define TEMPLATECLASS_H

#include <vector>

template <typename T>
class TemplateClass {
public:
    TemplateClass(T obj, int num, std::vector<float> vec) 
        : obj_(obj), num_(num), vec_(vec) {}

    bool foo() {
        return obj_.bar(num_, vec_);
    }

private:
    T obj_;
    int num_;
    std::vector<float> vec_;
};

// Partial specialization for int
template <>
class TemplateClass<int> {
public:
    TemplateClass(int obj, int num, std::vector<float> vec) {}

    bool foo() {
        return true;
    }
};

// Partial specialization for double
template <>
class TemplateClass<double> {
public:
    TemplateClass(double obj, int num, std::vector<float> vec) {}

    bool foo() {
        return false;
    }
};

#endif // TEMPLATECLASS_H
