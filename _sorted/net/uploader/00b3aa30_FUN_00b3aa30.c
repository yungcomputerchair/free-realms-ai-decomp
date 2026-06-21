// addr: 0x00b3aa30
// name: FUN_00b3aa30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_00b3aa30(void * reader, void ** outRecord) */

void __cdecl FUN_00b3aa30(void *reader,void **outRecord)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *this;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0x28-byte record with default fields, stores it through
                       outRecord, then fills it by deserializing from the reader via FUN_00b33020.
                       No type evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d6eab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar3 = Mem_Alloc(0x28);
  uVar2 = DAT_01be9644;
  uVar1 = DAT_01be9640;
  this = (undefined4 *)0x0;
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = uVar1;
    puVar3[5] = uVar2;
    puVar3[6] = uVar1;
    puVar3[7] = uVar2;
    puVar3[8] = 0;
    this = puVar3;
  }
  local_4 = 0xffffffff;
  *outRecord = this;
  FUN_00b33020(this,reader);
  ExceptionList = local_c;
  return;
}

