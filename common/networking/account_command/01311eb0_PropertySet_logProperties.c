// addr: 0x01311eb0
// name: PropertySet_logProperties
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void PropertySet_logProperties(void * this) */

void __fastcall PropertySet_logProperties(void *this)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  void *this_00;
  int iVar5;
  int local_38;
  int local_34;
  void *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs a PropertySet to wa_properties.log when the logging gate is enabled,
                       walking the tree and printing each property type and string value or
                       '<NULL>'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016774c8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_38;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffb8;
  ExceptionList = &local_c;
  local_30 = this;
  DisplayActionManager_ensureSingleton();
  iVar5 = ObjectWithField1c_hasValue(this_00);
  if ((char)iVar5 != '\0') {
    WAErrorLog_write("wa_properties.log","PropertySet <begin> 0x%p");
    iVar5 = (int)this + 4;
    if (iVar5 == 0) {
      FUN_00d83c2d(uVar4);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 0;
    local_34 = **(int **)((int)this + 8);
    local_38 = iVar5;
    while( true ) {
      iVar3 = local_34;
      iVar2 = local_38;
      iVar1 = *(int *)((int)this + 8);
      if ((local_38 == 0) || (local_38 != iVar5)) {
        FUN_00d83c2d();
      }
      if (iVar3 == iVar1) break;
      if (iVar2 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      if (*(int *)(iVar3 + 0x10) == 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                  (local_2c,"<NULL>",6);
      }
      else {
        if (iVar3 == *(int *)(iVar2 + 4)) {
          FUN_00d83c2d();
        }
        ValueData_debugPrint(*(void **)(iVar3 + 0x10),local_2c);
      }
      if (iVar3 == *(int *)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      WAErrorLog_write("wa_properties.log","\t Property Type = %3d, Value = %s");
      RBTreeIterator_increment(&local_38);
    }
    WAErrorLog_write("wa_properties.log","PropertySet <end> 0x%p");
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  return;
}

