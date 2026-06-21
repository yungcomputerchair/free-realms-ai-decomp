// addr: 0x013bb190
// name: UChatCommand_RequestFriendStatus_deserialize
// subsystem: common/networking/uchat_command
// source (binary assert): common/networking/uchat_command/UChatCommandRequestFriendStatus.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int UChatCommand_RequestFriendStatus_deserialize(void * this, void * stream)
    */

int __thiscall UChatCommand_RequestFriendStatus_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint extraout_EAX;
  int iVar4;
  void *outBuffer;
  void **unaff_EBX;
  void *unaff_ESI;
  void *size;
  uint auStack_30 [2];
  undefined1 auStack_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [12];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *local_4;
  
                    /* Deserializes RequestFriendStatus by reading the inherited UChatCommand
                       fields, reading compressed sizes/data, inflating it, and populating the
                       status vector. */
  local_4 = (void *)0xffffffff;
  puStack_8 = &LAB_01688878;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc4;
  ExceptionList = &local_c;
  PacketBuffer_init(local_20);
  local_4 = (void *)0x0;
  size = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,local_24,uVar3);
  if (cVar1 != '\0') {
    cVar1 = FUN_013bcf60(stream);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffc8);
      if (bVar2) {
        bVar2 = Deserializer_readInteger(stream,(int *)&stack0xffffffcc);
        if (bVar2) {
          iVar4 = ReadBuffer_claimBytes(stream,&local_4,unaff_EBX,(int)size);
          if ((char)iVar4 != '\0') {
            outBuffer = Mem_Alloc((uint)unaff_ESI);
            iVar4 = Zlib_inflateBuffer(outBuffer,auStack_30,local_4,(int)unaff_EBX);
            if (iVar4 != 0) {
              FUN_012f5a60("zres == 0",
                           "..\\common\\networking\\uchat_command\\UChatCommandRequestFriendStatus.cpp"
                           ,0x7b);
            }
            RawBuffer_assign(auStack_28,outBuffer,unaff_ESI,(uint)size);
                    /* WARNING: Subroutine does not return */
            _free(outBuffer);
          }
        }
      }
    }
  }
  local_c = (void *)0xffffffff;
  RawBuffer_free(auStack_28);
  ExceptionList = pvStack_14;
  return extraout_EAX & 0xffffff00;
}

