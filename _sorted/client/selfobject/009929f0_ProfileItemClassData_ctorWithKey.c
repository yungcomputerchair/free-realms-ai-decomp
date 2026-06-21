// addr: 0x009929f0
// name: ProfileItemClassData_ctorWithKey
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ProfileItemClassData_ctorWithKey(void * this, uint key_, uint value_)
    */

void * __thiscall ProfileItemClassData_ctorWithKey(void *this,uint key_,uint value_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Parameterized constructor for a ProfileItemClassData-like record: stores the
                       key/value arguments, initializes embedded list/string state, and applies the
                       same default 0x27e7 used by the no-arg ctor. Exact field names are unknown.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159bc9b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(uint *)this = key_;
  FUN_00720bf0(0,0);
  *(uint *)((int)this + 0x10) = value_;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0x27e7;
  *(undefined1 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

