// addr: 0x0127a1e0
// name: PropertySet_setDefaultValueData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertySet_setDefaultValueData(void * set, int propertyId, char
   valueType) */

void __cdecl PropertySet_setDefaultValueData(void *set,int propertyId,char valueType)

{
  uint uVar1;
  undefined3 in_stack_0000000d;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a temporary ValueData object of the requested type and stores it
                       into a property set entry. The called constructor installs
                       PersistentBase/PersistentComponent/ValueData vftables before assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01664768;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)local_18;
  ExceptionList = &local_c;
  ValueData_sub_012fa980(_valueType);
  local_4 = 0;
  Property_cloneIfPresent((void *)propertyId,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0(uVar1);
  ExceptionList = local_c;
  return;
}

