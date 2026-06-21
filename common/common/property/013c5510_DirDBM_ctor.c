// addr: 0x013c5510
// name: DirDBM_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * DirDBM_ctor(void * this) */

void * __fastcall DirDBM_ctor(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
                    /* Constructor for DirDBM. It initializes the DBMInterface base, installs the
                       DirDBM vtable, initializes two inline strings, constructs another member,
                       clears state, and allocates a 0x200000-byte buffer. */
  puStack_8 = &LAB_01689a84;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = DBMInterface::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined ***)this = DirDBM::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  uStack_3 = 0;
  local_4 = 2;
  StdRbTree_ctor((void *)((int)this + 0x40));
  _local_4 = CONCAT31(uStack_3,3);
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined1 *)((int)this + 0x50) = 0;
  pvVar1 = Mem_Alloc(0x200000);
  *(void **)((int)this + 0x54) = pvVar1;
  ExceptionList = local_c;
  return this;
}

