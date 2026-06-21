// addr: 0x00d833a6
// name: Mem_Alloc
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Mem_Alloc(uint size_) */

void * __cdecl Mem_Alloc(uint size_)

{
  int iVar1;
  void *pvVar2;
  undefined **local_10 [3];
  
                    /* Global allocation wrapper around malloc/new-handler that throws
                       std::bad_alloc on failure. */
  do {
    pvVar2 = _malloc(size_);
    if (pvVar2 != (void *)0x0) {
      return pvVar2;
    }
    iVar1 = __callnewh(size_);
  } while (iVar1 != 0);
  if ((_DAT_01bf3304 & 1) == 0) {
    _DAT_01bf3304 = _DAT_01bf3304 | 1;
    std::bad_alloc::bad_alloc((bad_alloc *)&DAT_01bf32f8);
    _atexit(FUN_017475c7);
  }
  std::exception::exception((exception *)local_10,(exception *)&DAT_01bf32f8);
  local_10[0] = std::bad_alloc::vftable;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(local_10,&DAT_0198d500);
}

