// addr: 0x01305af0
// name: LobbyVector_releaseStorage
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyVector_releaseStorage(void * vec) */

void __fastcall LobbyVector_releaseStorage(void *vec)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Releases vector storage at offsets 8/0xc/0x10 and zeroes begin/end/capacity.
                       This is generic vector cleanup reused by lobby role/child containers. */
  puStack_8 = &LAB_0167619b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  if (*(void **)((int)vec + 8) != (void *)0x0) {
    ExceptionList = &local_c;
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)vec + 8));
  }
  *(undefined4 *)((int)vec + 8) = 0;
  *(undefined4 *)((int)vec + 0xc) = 0;
  *(undefined4 *)((int)vec + 0x10) = 0;
  return;
}

