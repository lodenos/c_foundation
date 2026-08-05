# C Foundation

**A new modern way to think a C Foundation Library should be.**

> Arrogant C library for the 21st century.  
> Built for my own use first.  
> IA-assisted. Zero tolerance for bullshit code.  
> Single dictator here.  
> Bugs, better algorithms, ideas? PRs welcome.

---

## Vision

Build **from scratch** a pure C library that provides the most important **Abstract Data Types** with maximum performance and zero bloat.

No legacy baggage. No "good enough". No dependency on heavy standard containers or third-party libs for the core structures.

The goal is simple and non-negotiable:

- Extremely fast
- Cache-friendly
- Minimal allocations
- Fully inlinable where it matters
- Clean, modern C
- Predictable and controllable memory behavior

This is the foundation I want to build everything else on.

### Core Principles

- **From scratch** — every structure is written by hand and owned
- **Performance first** — design decisions are measured by speed and cache behavior, not by theoretical purity
- **Header-centric** — heavy use of `static inline` so the compiler can see everything
- **Zero tolerance** for slow, clever, or ugly code
- **AI-assisted development** with human dictatorship on quality

### Target Abstract Data Types

Priority order (current + planned):

| ADT              | Status      | Notes                                      |
|------------------|-------------|--------------------------------------------|
| Types            | Done        | Fixed-width aliases (`u8_t` … `f64_t`)     |
| Math Vectors     | Done        | `i32_v2_t`, `f32_v3_t`, `f64_v4_t`, etc.   |
| Singly Linked List | Done      | Intrusive-friendly, fully inline           |
| Dynamic Array / Vector | Planned | Contiguous, growth strategy optimized      |
| Queue / Deque    | Planned     | Ring buffer + linked variants              |
| Stack            | Planned     | Thin wrapper over dynamic array            |
| Hash Map / Set   | Planned     | Open addressing, cache-friendly            |
| Binary Tree / BST| Planned     | Balanced options later                     |
| Priority Queue   | Planned     | Binary heap first                          |

Supporting modules already present: `complex`, `polar`, `color`, `pointer`.

---

## Type System

```c
u8_t  → uint8_t
u16_t → uint16_t
u32_t → uint32_t
u64_t → uint64_t

i8_t  → int8_t
i16_t → int16_t
i32_t → int32_t
i64_t → int64_t

f32_t → float
f64_t → double
```

Clean, explicit, no surprises.

---

## List Example

```c
#include <stdio.h>
#include "list.h"

int main(void) {
  list_t* list = NULL;
  list_t* node;
  u64_t* value;

  for (u64_t index = 0; index < 8; ++index) {
    value = (u64_t*)malloc(sizeof(u64_t));
    *value = index * 2;
    list_new_init(&node, &(list_init_t){ .item = value });
    list_push_tail(&list, node);
  }

  list_each(list, node) {
    printf("> item value: %llu\n", *(u64_t*)node->item);
  }

  printf("list[5]->item: %llu\n", *(u64_t*)list_index(list, 5)->item);

  list_clear(list, free);
  list_delete(list);
  return 0;
}
```

---

## Philosophy in Practice

- Prefer contiguous memory and predictable access patterns
- Prefer `static inline` over separate compilation units for hot paths
- Prefer explicit ownership and clear lifetime rules
- Prefer measurable speed over abstract elegance
- Prefer being useful to me today over being perfect for everyone tomorrow

This library exists because the alternatives were either too slow, too heavy, too opaque, or too full of historical compromises.

---

## License

Unlicense — public domain.  
Do whatever you want with it.
