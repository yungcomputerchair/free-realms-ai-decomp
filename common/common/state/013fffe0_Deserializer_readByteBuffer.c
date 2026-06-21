// addr: 0x013fffe0
// name: Deserializer_readByteBuffer
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Deserializer_readByteBuffer(void * this, void * bufferOut) */

bool __cdecl Deserializer_readByteBuffer(void *this,void *bufferOut)

{
  size_t *outValue;
  size_t _Size;
  bool bVar1;
  void *_Dst;
  
                    /* Reads two encoded integers, allocates length+1 bytes, stores the buffer
                       pointer, and copies bytes from the deserializer stream if enough data
                       remains. Evidence is use of Deserializer_readInteger and stream offset/length
                       checks. */
  bVar1 = Deserializer_readInteger(this,bufferOut);
  if (!bVar1) {
    return false;
  }
  outValue = (size_t *)((int)bufferOut + 8);
  bVar1 = Deserializer_readInteger(this,(int *)outValue);
  if (bVar1) {
    _Dst = Mem_Alloc(*outValue + 1);
    _Size = *outValue;
    *(void **)((int)bufferOut + 4) = _Dst;
    if ((int)(*(int *)((int)this + 0xc) + _Size) <= *(int *)((int)this + 4)) {
      _memcpy(_Dst,(void *)(*(int *)this + *(int *)((int)this + 0xc)),_Size);
      *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + _Size;
      return true;
    }
  }
  return false;
}

