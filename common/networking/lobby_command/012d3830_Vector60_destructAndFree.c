// addr: 0x012d3830
// name: Vector60_destructAndFree
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Vector60_destructAndFree(void * this) */

void __fastcall Vector60_destructAndFree(void *this)

{
  int iVar1;
  int iVar2;
  
                    /* Destroys each 0x3c-byte element in a vector-like buffer and frees the backing
                       allocation; zeroes begin/end/capacity for an empty vector. */
  iVar2 = *(int *)((int)this + 4);
  if (iVar2 == 0) {
    *(undefined4 *)((int)this + 4) = 0;
    *(undefined4 *)((int)this + 8) = 0;
    *(undefined4 *)((int)this + 0xc) = 0;
    return;
  }
  iVar1 = *(int *)((int)this + 8);
  for (; iVar2 != iVar1; iVar2 = iVar2 + 0x3c) {
    FUN_012d2050();
  }
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 4));
}

