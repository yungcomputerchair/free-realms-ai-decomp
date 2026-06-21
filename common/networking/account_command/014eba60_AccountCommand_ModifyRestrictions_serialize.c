// addr: 0x014eba60
// name: AccountCommand_ModifyRestrictions_serialize
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandModifyRestrictions.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AccountCommandModifyRestrictions_serialize(void * this, void * stream) */

void __thiscall AccountCommand_ModifyRestrictions_serialize(void *this,void *stream)

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
  
                    /* Serializes AccountCommandModifyRestrictions, logging the account id and
                       writing a compressed restrictions payload with a zlib result assert. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b1108;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outSize = stream;
  (**(code **)(*(int *)this + 8))(stream,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  DebugStream_writeCString(stream,"Starting AccountCommand_ModifyRestrictions\n");
  AccountCommand_serialize(this,stream,(int)outSize);
  DebugStream_writeCString(stream,"AccountID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  PacketBuffer_init(auStack_24);
  puStack_8 = (undefined1 *)0x0;
  lStack_30 = CONCAT44(lStack_30._4_4_,auStack_24);
  STLVector_int_serialize(&lStack_30,(int)this + 0xc);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,(void **)&stack0xffffffcc,outSize);
  lStack_30 = (longlong)ROUND((double)(int)unaff_EBX * _DAT_018dfdf8);
  data = (void *)(0xc - (int)lStack_30);
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar1 = zlib_compress(_Dst,(long *)&stack0x00000000,pvStack_28,unaff_EBX);
  if (iVar1 != 0) {
    FUN_012f5a60("zres == 0",
                 "..\\common\\networking\\account_command\\AccountCommandModifyRestrictions.cpp",
                 0x98);
  }
  Serializer_appendInteger(stream,unaff_EBX);
  Serializer_appendInteger(stream,(uint)data);
  GrowableBuffer_append(stream,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

