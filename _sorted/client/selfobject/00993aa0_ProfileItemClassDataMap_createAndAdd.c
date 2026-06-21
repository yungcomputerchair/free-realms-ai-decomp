// addr: 0x00993aa0
// name: ProfileItemClassDataMap_createAndAdd
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ProfileItemClassDataMap_createAndAdd(uint key_, uint value_, uint extra_)
    */

bool __thiscall ProfileItemClassDataMap_createAndAdd(void *this,uint key_,uint value_,uint extra_)

{
  void *this_00;
  uint *entry;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a ProfileItemClassData record with key/value arguments and adds it
                       to the ProfileItemClassData map. Constructor and add helper provide type
                       evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159bdcb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this_00 = Mem_Alloc(0x34);
  local_4 = 0;
  if (this_00 == (void *)0x0) {
    entry = (uint *)0x0;
  }
  else {
    entry = ProfileItemClassData_ctorWithKey(this_00,key_,value_);
  }
  local_4 = 0xffffffff;
  ProfileItemClassDataMap_addOrReplace(this,entry);
  ExceptionList = local_c;
  return true;
}

