// addr: 0x012b5cb0
// name: QuadVector_copyCtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int QuadVector_copyCtor(int this, int other) */

int __thiscall QuadVector_copyCtor(void *this,int this,int other)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a vector whose element size is 16 bytes by delegating to
                       FUN_012b5640. The callee computes element count with (end-begin)>>4 and
                       copies the range. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166d228;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_012b5640(this);
  ExceptionList = local_c;
  return (int)this;
}

