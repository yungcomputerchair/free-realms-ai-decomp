// addr: 0x012f05e0
// name: NetworkService_appendBuffer
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int NetworkService_appendBuffer(char ** buffer, int * length, void * data,
   uint size_) */

int NetworkService_appendBuffer(char **buffer,int *length,void *data,uint size_)

{
  char *pcVar1;
  
                    /* Appends bytes to a growable buffer, allocating/reallocating storage and
                       updating the length. Evidence: used by NetworkService send/pending queues and
                       performs malloc/realloc plus memcpy. */
  if (*buffer == (char *)0x0) {
    pcVar1 = _malloc(*length + size_);
    *buffer = pcVar1;
  }
  else {
    pcVar1 = (char *)FUN_00d8a744(*buffer);
    *buffer = pcVar1;
    if (pcVar1 == (char *)0x0) {
      return -1;
    }
  }
  _memcpy(*buffer + *length,data,size_);
  *length = *length + size_;
  return 0;
}

