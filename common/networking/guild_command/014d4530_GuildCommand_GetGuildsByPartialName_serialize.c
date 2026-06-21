// addr: 0x014d4530
// name: GuildCommand_GetGuildsByPartialName_serialize
// subsystem: common/networking/guild_command
// source (binary assert): common/networking/guild_command/GuildCommandGetGuildsByPartialName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void GuildCommand_GetGuildsByPartialName_serialize(void * param_1, void *
   param_2) */

void __thiscall
GuildCommand_GetGuildsByPartialName_serialize(void *this,void *param_1,void *param_2)

{
  void *data;
  void *_Dst;
  int iVar1;
  uint unaff_EBX;
  int *outSize;
  longlong lStack_30;
  void *pvStack_28;
  undefined1 auStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes GuildCommand_GetGuildsByPartialName, logging the partial guild
                       name and writing a compressed payload. The start/end strings and zlib
                       assertion in GuildCommandGetGuildsByPartialName.cpp identify the serialize
                       path. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016acc38;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outSize = param_1;
  (**(code **)(*(int *)this + 8))(param_1,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  DebugStream_writeCString(param_1,"Starting GuildCommand_GetGuildsByPartialName\n");
  GuildCommand_serialize(this,param_1);
  DebugStream_writeCString(param_1,"Partial Guild Name: ");
  Serializer_appendString(param_1,(void *)((int)this + 0x28));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x44));
  PacketBuffer_init(auStack_24);
  puStack_8 = (undefined1 *)0x0;
  lStack_30._0_4_ = auStack_24;
  STLVector_int_serialize(&lStack_30,(int)this + 8);
  lStack_30 = CONCAT44(lStack_30._4_4_,auStack_24);
  STLVector_string_serialize((int)this + 0x18);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,(void **)&stack0xffffffcc,outSize);
  lStack_30 = (longlong)ROUND((double)(int)unaff_EBX * _DAT_018dfdf8);
  data = (void *)(0xc - (int)(undefined1 *)lStack_30);
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar1 = zlib_compress(_Dst,(long *)&stack0x00000000,pvStack_28,unaff_EBX);
  if (iVar1 != 0) {
    FUN_012f5a60("zres == 0",
                 "..\\common\\networking\\guild_command\\GuildCommandGetGuildsByPartialName.cpp",
                 0xb9);
  }
  Serializer_appendInteger(param_1,unaff_EBX);
  Serializer_appendInteger(param_1,(uint)data);
  GrowableBuffer_append(param_1,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

