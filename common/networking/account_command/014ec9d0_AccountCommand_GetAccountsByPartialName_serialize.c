// addr: 0x014ec9d0
// name: AccountCommand_GetAccountsByPartialName_serialize
// subsystem: common/networking/account_command
// source (binary assert): common/networking/account_command/AccountCommandGetAccountsByPartialName.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AccountCommandGetAccountsByPartialName_serialize(void * this, void *
   stream) */

void __thiscall AccountCommand_GetAccountsByPartialName_serialize(void *this,void *stream)

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
  
                    /* Serializes GetAccountsByPartialName, logging the partial account name and
                       writing the request fields plus a compressed payload. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b1388;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  outSize = stream;
  (**(code **)(*(int *)this + 8))(stream,DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  DebugStream_writeCString(stream,"Starting AccountCommand_GetAccountsByPartialName\n");
  AccountCommand_serialize(this,stream,(int)outSize);
  DebugStream_writeCString(stream,"Partial Account Name: ");
  Serializer_appendString(stream,(void *)((int)this + 0x38));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x54));
  PacketBuffer_init(auStack_24);
  puStack_8 = (undefined1 *)0x0;
  lStack_30._0_4_ = auStack_24;
  STLVector_int_serialize(&lStack_30,(int)this + 8);
  lStack_30._0_4_ = auStack_24;
  STLVector_string_serialize((int)this + 0x18);
  lStack_30 = CONCAT44(lStack_30._4_4_,auStack_24);
  STLVector_string_serialize((int)this + 0x28);
  PacketBuffer_getDataAndSize(auStack_24,&pvStack_28,(void **)&stack0xffffffcc,outSize);
  lStack_30 = (longlong)ROUND((double)(int)unaff_EBX * _DAT_018dfdf8);
  data = (void *)(0xc - (int)(undefined1 *)lStack_30);
  _Dst = Mem_Alloc((uint)data);
  _memset(_Dst,0,(size_t)data);
  iVar1 = zlib_compress(_Dst,(long *)&stack0x00000000,pvStack_28,unaff_EBX);
  if (iVar1 != 0) {
    FUN_012f5a60("zres == 0",
                 "..\\common\\networking\\account_command\\AccountCommandGetAccountsByPartialName.cpp"
                 ,0xcc);
  }
  Serializer_appendInteger(stream,unaff_EBX);
  Serializer_appendInteger(stream,(uint)data);
  GrowableBuffer_append(stream,_Dst,data,(int)outSize);
                    /* WARNING: Subroutine does not return */
  _free(_Dst);
}

