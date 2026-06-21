// addr: 0x01360ef0
// name: sub_01360ef0_destroyIntIntMapMember230
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 sub_01360ef0_destroyIntIntMapMember230(void * this, int flags) */

int __thiscall sub_01360ef0_destroyIntIntMapMember230(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper that destroys the int-int map/value member at offset
                       +0x230 and returns the flags argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ecb9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ValueData_IntIntMap_copyConstruct((void *)flags,(void *)((int)this + 0x230));
  ExceptionList = local_c;
  return flags;
}

