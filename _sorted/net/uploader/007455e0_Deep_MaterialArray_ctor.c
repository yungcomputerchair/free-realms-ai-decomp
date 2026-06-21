// addr: 0x007455e0
// name: Deep_MaterialArray_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int Deep_MaterialArray_ctor(int this_, void * owner) */

int __thiscall Deep_MaterialArray_ctor(void *this,int this_,void *owner)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs an object containing a SoeUtil::Array<unsigned char> and a
                       SoeUtil::Array<Deep::Material*> then stores the owner/context at offset 0x54.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01553a0e;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00744800(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)((int)this + 0x34) = SoeUtil::Array<unsigned_char,0,1>::vftable;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined ***)((int)this + 0x44) = SoeUtil::Array<Deep::Material*,0,1>::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(int *)((int)this + 0x54) = this_;
  ExceptionList = local_c;
  return (int)this;
}

