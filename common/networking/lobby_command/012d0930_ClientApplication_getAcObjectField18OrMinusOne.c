// addr: 0x012d0930
// name: ClientApplication_getAcObjectField18OrMinusOne
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int ClientApplication_getAcObjectField18OrMinusOne(void * param_1) */

int __fastcall ClientApplication_getAcObjectField18OrMinusOne(void *param_1)

{
  int iVar1;
  
                    /* Returns field +0x18 from the object stored at ClientApplication offset +0xac,
                       or -1 when that member is null. Evidence: the only callee 01301f30 is a
                       trivial getter for +0x18. */
  if (*(int *)((int)param_1 + 0xac) != 0) {
    iVar1 = FUN_01301f30();
    return iVar1;
  }
  return -1;
}

