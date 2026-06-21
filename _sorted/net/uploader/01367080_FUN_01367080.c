// addr: 0x01367080
// name: FUN_01367080
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_01367080(void * record, int a_, int b_, int c_, int subobjectArg_,
   bool flag_) */

void * __thiscall
FUN_01367080(void *this,void *record,int a_,int b_,int c_,int subobjectArg_,bool flag_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small record with three scalar fields, constructs an embedded
                       subobject from the fourth argument, and stores two flags. No class identity
                       is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167fa5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(void **)this = record;
  *(int *)((int)this + 4) = a_;
  *(int *)((int)this + 8) = b_;
  FUN_01362900(c_);
  *(undefined1 *)((int)this + 0x24) = (undefined1)subobjectArg_;
  *(undefined1 *)((int)this + 0x25) = 0;
  ExceptionList = local_c;
  return this;
}

