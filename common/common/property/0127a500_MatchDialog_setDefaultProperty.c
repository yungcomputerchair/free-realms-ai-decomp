// addr: 0x0127a500
// name: MatchDialog_setDefaultProperty
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchDialog_setDefaultProperty(void * dialog, int propertyId) */

void __cdecl MatchDialog_setDefaultProperty(void *dialog,int propertyId)

{
  uint uVar1;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Helper used by MatchDialog setup to assign a default/empty property value for
                       a numeric property id. It constructs a temporary value with FUN_0127a3e0 and
                       passes it to FUN_01312760. */
  puStack_8 = &LAB_01664860;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)local_18;
  ExceptionList = &local_c;
  local_4 = 0;
  ValueData_ctor(&stack0x0000000c);
  local_4._0_1_ = 1;
  Property_cloneIfPresent((void *)propertyId,local_18);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0(uVar1);
  local_4 = 0xffffffff;
  FUN_01300cd0();
  ExceptionList = local_c;
  return;
}

