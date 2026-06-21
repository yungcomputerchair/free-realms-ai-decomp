// addr: 0x00921460
// name: ProfileItemState_deserializeAndApply
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ProfileItemState_deserializeAndApply(void * reader, void ** outState) */

void ProfileItemState_deserializeAndApply(void *reader,void **outState)

{
  void *reader_00;
  void *pvVar1;
  void *in_ECX;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates ProfileItemState, deserializes its main record with 00911d60,
                       applies profile/action-bar side effects, optionally returns the state, then
                       parses trailing fixed records. Called by SelfObject_ParseFromBlob. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0158e63b;
  local_c = ExceptionList;
  reader_00 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xe4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProfileItemState_ctor(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_00911d60(reader);
  SelfObject_applyProfileTypeEntry(in_ECX,pvVar1);
  if (outState != (void **)0x0) {
    *outState = pvVar1;
  }
  FUN_008fa5c0(reader);
  Stream_ReadFixedRecordListUntilZero(*(void **)((int)pvVar1 + 0xd0),reader,reader_00);
  ExceptionList = local_c;
  return;
}

