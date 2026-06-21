// addr: 0x013ee970
// name: GatewayCommand_GetConnectionServer_applyResult
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GatewayCommand_GetConnectionServer_applyResult(void * this) */

int __fastcall GatewayCommand_GetConnectionServer_applyResult(void *this)

{
  uint uVar1;
  void *pvVar2;
  void *this_00;
  undefined4 uVar3;
  int value_;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Applies a get-connection-server result: on success it updates the global
                       default host/port, reconfigures NetworkService to use the default endpoint,
                       and posts a display action with host/port; on failure it posts the failure
                       code. Evidence: calls NetworkService_getSingleton and
                       NetworkService_useDefaultEndpoint and copies host/port from command fields.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168efab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  pvVar2 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    pvVar2 = (void *)FUN_012f9eb0(uVar1);
  }
  local_4 = 0xffffffff;
  if (*(char *)((int)this + 0x5c) == '\0') {
    FUN_012f8c70(0x95);
    value_ = *(int *)((int)this + 0x60);
  }
  else {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&DAT_01bb94a0,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               ((int)this + 0x3c),0,0xffffffff);
    DAT_01cbd968 = *(undefined4 *)((int)this + 0x58);
    this_00 = NetworkService_getSingleton();
    NetworkService_useDefaultEndpoint(this_00);
    FUN_012f8c70(0x96);
    DisplayActionBuilder_addStringArg
              (pvVar2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)((int)this + 0x3c));
    value_ = *(int *)((int)this + 0x58);
  }
  DisplayActionBuilder_addIntArg(pvVar2,value_);
  DisplayActionManager_ensureSingleton();
  uVar3 = FUN_012d3550(pvVar2);
  ExceptionList = local_c;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}

