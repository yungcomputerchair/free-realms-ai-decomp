// addr: 0x01360f60
// name: sub_01360f60_destroyIntIntMapMember29c
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 sub_01360f60_destroyIntIntMapMember29c(void * this, int flags) */

int __thiscall sub_01360f60_destroyIntIntMapMember29c(void *this,int flags)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor-style helper that destroys the int-int map/value member at offset
                       +0x29c and returns the flags argument. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0167ecf9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  ValueData_IntIntMap_copyConstruct((void *)flags,(void *)((int)this + 0x29c));
  ExceptionList = local_c;
  return flags;
}

