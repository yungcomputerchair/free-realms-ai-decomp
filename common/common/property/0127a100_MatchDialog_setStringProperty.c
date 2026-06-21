// addr: 0x0127a100
// name: MatchDialog_setStringProperty
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchDialog_setStringProperty(void * dialog, int propertyId, char *
   value) */

void __cdecl MatchDialog_setStringProperty(void *dialog,int propertyId,char *value)

{
  uint uVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Helper used while constructing the MatchDialog UI state to assign a string
                       property by numeric id. It prepares the string/value object then calls
                       FUN_01312760 with the property id. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01664708;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)local_18;
  ExceptionList = &local_c;
  ValueData_ctorString(value);
  local_4 = 0;
  Property_cloneIfPresent((void *)propertyId,local_18);
  local_4 = 0xffffffff;
  FUN_01300cd0(uVar1);
  ExceptionList = local_c;
  return;
}

