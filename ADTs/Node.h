//
// Created by straydragon on 18-10-13.
//

#ifndef DATASTRUCTURE_ALGORITHM_CPP_NODE_H
#define DATASTRUCTURE_ALGORITHM_CPP_NODE_H

/**
 * @brief 结点POCO(Plain Ordinary Cpp Object)类
 *
 * @tparam E 元素类型
 */
template <typename E>
class Node {
 private:
  E _element;
  Node<E>* _next;

 public:
  Node();

  explicit Node(const E& element);

  Node(const E& element, Node<E>* next);

  void setElement(const E& element);

  void setNext(Node<E>* next);  // TODO:原来参数为(const Node<E>* next)

  E getElement() const;

  Node<E>* getNext() const;
};

#include "Node.cpp"
#endif  // DATASTRUCTURE_ALGORITHM_CPP_NODE_H
