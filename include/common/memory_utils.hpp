#include <cstddef>

namespace io
{
void* aligned_malloc(size_t size, size_t align);
void  aligned_free(void* p);
}  // namespace io
