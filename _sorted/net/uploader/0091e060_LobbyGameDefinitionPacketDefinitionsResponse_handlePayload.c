// addr: 0x0091e060
// name: LobbyGameDefinitionPacketDefinitionsResponse_handlePayload
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
LobbyGameDefinitionPacketDefinitionsResponse_handlePayload(int param_1,int param_2,int param_3)

{
  char cVar1;
  uint stream_;
  undefined1 local_40 [8];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  char local_24;
  undefined1 local_23;
  undefined1 local_20 [12];
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Parses a lobby game-definition packet definitions response payload and
                       applies it to the game definition state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158e080;
  local_c = ExceptionList;
  stream_ = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_c;
  BaseLobbyGameDefinitionPacket_ctor(local_40);
  local_4 = 0;
  if (param_2 != 0) {
    local_28 = param_2 + param_3;
    local_34 = param_2;
    local_30 = param_3;
    local_2c = param_2;
    local_24 = '\0';
    local_23 = 0;
    Int16Pair_deserialize(local_40,(int)&local_34,stream_);
    if ((local_24 == '\0') && (local_38 == 2)) {
      LobbyGameDefinitionPacketDefinitionsResponse_ctor(local_20,0,(void *)0x0);
      local_4 = CONCAT31(local_4._1_3_,2);
      cVar1 = FUN_008f74c0(local_20,param_2,param_3,0);
      if (cVar1 != '\0') {
        FUN_01029690();
        local_34 = local_14;
        local_2c = local_14;
        local_28 = local_14 + local_10;
        local_30 = local_10;
        local_24 = '\0';
        local_23 = 0;
        FUN_00919b60(&local_34,*(undefined4 *)(param_1 + 0x110));
        FUN_01028420();
      }
      local_4 = local_4 & 0xffffff00;
      LobbyGameDefinitionPacketDefinitionsResponse_dtor(local_20);
    }
  }
  ExceptionList = local_c;
  return;
}

