
template <class T>
class Deque : public Queue
{
  public:
    virtual bool getHead(T &x) const = 0;
    virtual bool getTail(T &x) const = 0;
    virtual bool EnQueue(const T &x) {
        return EnQueueTail(x);
    };
    virtual bool EnQueueHead(const T &x) =0;
    virtual bool EnQueueTail(const T &x) =0;
    virtual bool DeQueue(T &x) {
        return DeQueueHead(x);
    };
    virtual bool DeQueueHead(T &x) =0;
    virtual bool DeQueueTail(T &x) =0;
};