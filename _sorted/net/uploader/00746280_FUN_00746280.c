// addr: 0x00746280
// name: FUN_00746280
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __fastcall FUN_00746280(int param_1)

{
  void *owner;
  void *this;
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x58-byte object and constructs it from the owner field at offset
                       0x1d0. The constructed class is not identified in this context. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01553c5b;
  local_c = ExceptionList;
  owner = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  ExceptionList = &local_c;
  this = Mem_Alloc(0x58);
  local_4 = 0;
  if (this == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = Deep_MaterialArray_ctor(this,*(int *)(param_1 + 0x1d0),owner);
  }
  ExceptionList = local_c;
  return iVar1;
}

