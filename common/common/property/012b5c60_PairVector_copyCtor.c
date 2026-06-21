// addr: 0x012b5c60
// name: PairVector_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PairVector_copyCtor(int this, int other) */

int __thiscall PairVector_copyCtor(void *this,int this,int other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a vector whose element size is 8 bytes by delegating to
                       FUN_012b5740. The callee computes element count with (end-begin)>>3 and
                       copies the range. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d1f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012b5740(this);
  ExceptionList = local_c;
  return (int)this;
}

