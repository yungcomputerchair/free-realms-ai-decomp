// addr: 0x014cc7f0
// name: LobbyCommand_BulkJoin_deserialize
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandBulkJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int LobbyCommand_BulkJoin_deserialize(void * this, void * stream) */

int __thiscall LobbyCommand_BulkJoin_deserialize(void *this,void *stream)

{
  bool bVar1;
  char extraout_AL;
  uint3 extraout_var;
  void *pvVar2;
  uint3 extraout_var_00;
  uint3 extraout_var_01;
  uint3 extraout_var_02;
  uint3 extraout_var_03;
  uint3 extraout_var_04;
  uint3 uVar4;
  uint extraout_EAX;
  uint3 extraout_var_05;
  int iVar3;
  int unaff_EBX;
  void *unaff_EBP;
  void *vector;
  void **ppvStack_34;
  uint local_30 [2];
  undefined1 auStack_28 [20];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Deserializes a BulkJoin command, supporting compressed and older uncompressed
                       encodings, reading version-gated fields and then invoking the post-read/base
                       handler. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016ab6d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  vector = stream;
  (**(code **)(*(int *)this + 0x10))(stream,local_30,DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  bVar1 = LobbyCommand_deserialize(this,stream);
  uVar4 = extraout_var;
  if (!bVar1) goto LAB_014cc967;
  if (2 < unaff_EBX) {
    PacketBuffer_init(auStack_28);
    local_c = (void *)0x0;
    bVar1 = Deserializer_readInteger(stream,(int *)&stack0xffffffc4);
    if (((bVar1) && (bVar1 = Deserializer_readInteger(stream,(int *)&ppvStack_34), bVar1)) &&
       (iVar3 = ReadBuffer_claimBytes(stream,&pvStack_4,ppvStack_34,(int)vector),
       (char)iVar3 != '\0')) {
      pvVar2 = Mem_Alloc((uint)unaff_EBP);
      iVar3 = Zlib_inflateBuffer(pvVar2,local_30,pvStack_4,(int)ppvStack_34);
      if (iVar3 != 0) {
        FUN_012f5a60("zres == 0","..\\common\\networking\\lobby_command\\LobbyCommandBulkJoin.cpp",
                     0x122);
      }
      RawBuffer_assign(auStack_28,pvVar2,unaff_EBP,(uint)vector);
                    /* WARNING: Subroutine does not return */
      _free(pvVar2);
    }
    local_c = (void *)0xffffffff;
    RawBuffer_free(auStack_28);
    ExceptionList = pvStack_14;
    return extraout_EAX & 0xffffff00;
  }
  pvStack_4 = stream;
  ppvStack_34 = (void **)0x1;
  pvVar2 = (void *)LobbyRoleMap_getOrCreateRoleSet(&ppvStack_34);
  Deserializer_readIntegerVector(&pvStack_4,pvVar2);
  ppvStack_34 = (void **)0x2;
  pvVar2 = (void *)LobbyRoleMap_getOrCreateRoleSet(&ppvStack_34);
  Deserializer_readIntegerVector(&pvStack_4,pvVar2);
  ppvStack_34 = (void **)0x3;
  pvVar2 = (void *)LobbyRoleMap_getOrCreateRoleSet(&ppvStack_34);
  Deserializer_readIntegerVector(&pvStack_4,pvVar2);
  ppvStack_34 = (void **)0x4;
  pvVar2 = (void *)LobbyRoleMap_getOrCreateRoleSet(&ppvStack_34);
  Deserializer_readIntegerVector(&pvStack_4,pvVar2);
  ppvStack_34 = (void **)0x5;
  pvVar2 = (void *)LobbyRoleMap_getOrCreateRoleSet(&ppvStack_34);
  Deserializer_readIntegerVector(&pvStack_4,pvVar2);
  Deserializer_readInteger(stream,(int *)((int)this + 0x14));
  if (1 < unaff_EBX) {
    pvStack_4 = stream;
    bVar1 = Deserializer_readIntegerVector(&pvStack_4,(void *)((int)this + 0x18));
    uVar4 = extraout_var_00;
    if (!bVar1) goto LAB_014cc967;
    pvStack_4 = stream;
    bVar1 = Deserializer_readStringVector(&pvStack_4,(void *)((int)this + 0x28));
    uVar4 = extraout_var_01;
    if (!bVar1) goto LAB_014cc967;
    pvStack_4 = stream;
    PropertySetPtrVector_deserialize((int)this + 0x38);
    uVar4 = extraout_var_02;
    if (extraout_AL == '\0') goto LAB_014cc967;
    pvStack_4 = stream;
    bVar1 = StdVector_PropertySetPtr_deserialize(&pvStack_4,(void *)((int)this + 0x58));
    uVar4 = extraout_var_03;
    if (!bVar1) goto LAB_014cc967;
    pvStack_4 = stream;
    bVar1 = LobbyCommand_deserializeIntVector(&pvStack_4,(void *)((int)this + 0x68),vector);
    uVar4 = extraout_var_04;
    if (!bVar1) goto LAB_014cc967;
  }
  if (3 < unaff_EBX) {
    pvStack_4 = stream;
    bVar1 = Deserializer_readStringVector(&pvStack_4,(void *)((int)this + 0x48));
    uVar4 = extraout_var_05;
    if (!bVar1) {
LAB_014cc967:
      ExceptionList = pvStack_14;
      return (uint)uVar4 << 8;
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x14))(stream);
  ExceptionList = pvStack_14;
  return iVar3;
}

