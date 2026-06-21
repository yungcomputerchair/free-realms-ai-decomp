// addr: 0x013ba330
// name: UChatCommand_RequestFriendStatus_serialize
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestFriendStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void UChatCommand_RequestFriendStatus_serialize(void * this, void * stream) */

void __thiscall UChatCommand_RequestFriendStatus_serialize(void *this,void *stream)

{
  uint uVar1;
  void *data;
  void *_Dst;
  int iVar2;
  int *outSize;
  void *pvStack_2c;
  void *pvStack_28;
  undefined1 auStack_24 [4];
  undefined1 local_20 [20];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes RequestFriendStatus by writing the inherited UChatCommand fields,
                       serializing the status vector, compressing it, and writing the compressed
                       buffer length and bytes. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01688718;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  PacketBuffer_init(local_20);
  local_4 = 0;
  outSize = stream;
  (**(code **)(*(int *)this + 8))(stream,uVar1);
  UChatCommand_dump(this,stream);
  UChatCommand_RequestFriendStatusList_serialize(&stack0x00000000,(int)this + 0x44);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,&pvStack_2c,outSize);
  data = (void *)(0xc - (int)(longlong)ROUND((double)(int)pvStack_2c * _DAT_018dfdf8));
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar2 = zlib_compress(_Dst,(long *)&stack0xffffffcc,pvStack_28,(long)pvStack_2c);
  if (iVar2 != 0) {
    FUN_012f5a60("zres == 0",
                 "..\\common\\networking\\uchat_command\\UChatCommandRequestFriendStatus.cpp",0xa4);
  }
  Serializer_appendInteger(stream,(uint)pvStack_2c);
  Serializer_appendInteger(stream,(uint)data);
  GrowableBuffer_append(stream,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

