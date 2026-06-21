// addr: 0x01014590
// name: VideoCapture_AVI_replaceIndexChunk
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool VideoCapture_AVI_replaceIndexChunk(void * this, void * a, void * b, void
   ** slot) */

bool __thiscall VideoCapture_AVI_replaceIndexChunk(void *this,void *a,void *b,void **slot)

{
  void *_Memory;
  uint uVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a VideoCapture_AVI_IndexChunk when capacity permits, destroys any
                       existing chunk in the slot, stores the new chunk, and reports success. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163425b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  if (*(int *)((int)this + 0x30) == *(int *)((int)this + 0x20)) {
    return false;
  }
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x48);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)VideoCapture_AVI_IndexChunk_ctor(a,b);
  }
  local_4 = 0xffffffff;
  _Memory = *slot;
  if (_Memory != (void *)0x0) {
    FUN_010133c0(uVar1);
                    /* WARNING: Subroutine does not return */
    _free(_Memory);
  }
  *slot = pvVar2;
  ExceptionList = local_c;
  return true;
}

