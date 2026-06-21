// addr: 0x014d4b70
// name: GuildCommand_GetGuildsByPartialName_deserialize
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandGetGuildsByPartialName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuildCommand_GetGuildsByPartialName_deserialize(void * param_1, void *
   param_2) */

int __thiscall
GuildCommand_GetGuildsByPartialName_deserialize(void *this,void *param_1,void *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  uint uVar2;
  void *outBuffer;
  int iVar3;
  void *unaff_EBX;
  void **unaff_ESI;
  void *size;
  void *apvStack_30 [2];
  undefined1 auStack_28 [4];
  undefined1 local_24 [16];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes GuildCommand_GetGuildsByPartialName from the network stream,
                       reading base GuildCommand fields, partial-name data, lengths, and an inflated
                       payload. The zlib assertion in GuildCommandGetGuildsByPartialName.cpp
                       identifies the compressed payload path. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016acd68;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  size = param_1;
  (**(code **)(*(int *)this + 0x10))(param_1,local_24,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  bVar1 = GuildCommand_deserialize(this,param_1);
  uVar2 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar1 = Deserializer_readString(param_1,(void *)((int)this + 0x28));
    uVar2 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1) {
      bVar1 = Deserializer_readInteger(param_1,(int *)((int)this + 0x44));
      uVar2 = CONCAT31(extraout_var_01,bVar1);
      if (bVar1) {
        bVar1 = Deserializer_readInteger(param_1,(int *)&pvStack_4);
        uVar2 = CONCAT31(extraout_var_02,bVar1);
        if (bVar1) {
          bVar1 = Deserializer_readInteger(param_1,(int *)&stack0xffffffc8);
          uVar2 = CONCAT31(extraout_var_03,bVar1);
          if (bVar1) {
            uVar2 = ReadBuffer_claimBytes(param_1,&stack0xffffffcc,unaff_ESI,(int)size);
            if ((char)uVar2 != '\0') {
              outBuffer = Mem_Alloc((uint)pvStack_4);
              apvStack_30[0] = pvStack_4;
              iVar3 = Zlib_inflateBuffer(outBuffer,(uint *)apvStack_30,unaff_EBX,(int)unaff_ESI);
              if (iVar3 != 0) {
                FUN_012f5a60("zres == 0",
                             "..\\common\\networking\\guild_command\\GuildCommandGetGuildsByPartialName.cpp"
                             ,0x82);
              }
              PacketBuffer_init(auStack_28);
              local_c = (void *)0x0;
              RawBuffer_assign(auStack_28,outBuffer,pvStack_4,(uint)size);
                    /* WARNING: Subroutine does not return */
              _free(outBuffer);
            }
          }
        }
      }
    }
  }
  ExceptionList = pvStack_14;
  return uVar2 & 0xffffff00;
}

