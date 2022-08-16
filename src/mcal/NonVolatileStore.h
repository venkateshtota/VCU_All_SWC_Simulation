/*******************************************************************************
 * Autogenerated by MCALgen for FLS V1.0.54.30643: NonVolatileStore.h
 *******************************************************************************/
#ifndef NONVOLATILESTORE_H_
#define NONVOLATILESTORE_H_

/******************************************************************************
 *		NonVolatileStore - used by Fls and Eep
 ******************************************************************************/
#ifdef __cplusplus
extern "C" {
#endif
  #include "Std_Types.h"
#ifdef __cplusplus
}
#endif

/******************************************************************************/
class NonVolatileStore {
  private:
    const char *m_Filename;
    int m_FileHandle;
    int m_HMapFile;
    uint8 *m_MappedFile;
    unsigned m_Size;
  public:
    NonVolatileStore(const char *name, unsigned size);
    ~NonVolatileStore();

    bool Exists(void);
    void Flush(unsigned offset, unsigned length);
    uint8 *BaseAddress(void) { return m_MappedFile; }

    void memset(unsigned start, uint8 value, unsigned length);
    void memcpy(unsigned start, uint8 *src, unsigned length);
    void memcpy(uint8 *dst, unsigned start, unsigned length);
    uint8 peek(unsigned offset);
    void  poke(unsigned offset, uint8 value);
    void MemoryDeAllocation(void);    
};

#endif /* NONVOLATILESTORE_H_ */

