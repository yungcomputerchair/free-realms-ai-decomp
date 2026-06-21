// addr: 0x014ccbc0
// name: LobbyCommand_BulkJoin_serialize
// subsystem: common/networking/lobby_command
// source (binary assert): common/networking/lobby_command/LobbyCommandBulkJoin.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void LobbyCommand_BulkJoin_serialize(void * this, void * stream) */

void __thiscall LobbyCommand_BulkJoin_serialize(void *this,void *stream)

{
  int iVar1;
  void *data;
  void *_Dst;
  int *outSize;
  void *pvStack_34;
  longlong lStack_30;
  void *pvStack_28;
  undefined1 auStack_24 [24];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Serializes a BulkJoin command: calls the base serializer, writes version
                       markers 1..5, serializes scalar/vector members, compresses the payload, then
                       writes compressed size and bytes. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016ab708;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outSize = stream;
  (**(code **)(*(int *)this + 8))(stream,DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  LobbyCommand_dump(this,stream,outSize);
  PacketBuffer_init(auStack_24);
  puStack_8 = (undefined1 *)0x0;
  lStack_30._0_4_ = 1;
  iVar1 = LobbyRoleMap_getOrCreateRoleSet(&lStack_30);
  STLVector_int_serialize(&stack0x00000000,iVar1);
  lStack_30._0_4_ = 2;
  iVar1 = LobbyRoleMap_getOrCreateRoleSet(&lStack_30);
  STLVector_int_serialize(&stack0x00000000,iVar1);
  lStack_30._0_4_ = 3;
  iVar1 = LobbyRoleMap_getOrCreateRoleSet(&lStack_30);
  STLVector_int_serialize(&stack0x00000000,iVar1);
  lStack_30._0_4_ = 4;
  iVar1 = LobbyRoleMap_getOrCreateRoleSet(&lStack_30);
  STLVector_int_serialize(&stack0x00000000,iVar1);
  lStack_30 = CONCAT44(lStack_30._4_4_,5);
  iVar1 = LobbyRoleMap_getOrCreateRoleSet(&lStack_30);
  STLVector_int_serialize(&stack0x00000000,iVar1);
  Serializer_appendInteger(auStack_24,*(uint *)((int)this + 0x14));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x18);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_int_serialize_014c9d60(&stack0x00000000,(void *)((int)this + 0x38),(int)outSize);
  STLVector_serializablePointer_serialize_014c9e10
            (&stack0x00000000,(void *)((int)this + 0x58),(int)outSize);
  STLVector_int_serialize_014c6a60(&stack0x00000000,(void *)((int)this + 0x68),(int)outSize);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,&pvStack_34,outSize);
  lStack_30 = (longlong)ROUND((double)(int)pvStack_34 * _DAT_018dfdf8);
  data = (void *)(0xc - (int)lStack_30);
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar1 = zlib_compress(_Dst,(long *)&stack0xffffffc8,pvStack_28,(long)pvStack_34);
  if (iVar1 != 0) {
    FUN_012f5a60("zres == 0","..\\common\\networking\\lobby_command\\LobbyCommandBulkJoin.cpp",0x18d
                );
  }
  Serializer_appendInteger(stream,(uint)pvStack_34);
  Serializer_appendInteger(stream,(uint)data);
  GrowableBuffer_append(stream,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

