// addr: 0x01511ee0
// name: OdbFile_getRecordData
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int OdbFile_getRecordData(int this, void ** out_data, int * out_size, int
   record_id) */

int __cdecl OdbFile_getRecordData(int this,void **out_data,int *out_size,int record_id)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  
  piVar5 = out_size;
                    /* Looks up an ODB record, seeks the backing FILE to its offset, mallocs a
                       buffer, reads the record bytes, warns on a short read, then XOR-decodes each
                       byte with 0x46. Returns 1 on success and 0 when the record lookup or seek
                       fails. */
  iVar1 = this;
  if (out_size != (int *)0x0) {
    *out_size = -1;
  }
  bVar2 = OdbFile_findRecordEntry(*(void **)(this + 0x20),record_id,(uint *)&this,(uint *)&out_size)
  ;
  if ((bVar2) && (iVar3 = _fseek(*(FILE **)(iVar1 + 0x10),this,0), iVar3 == 0)) {
    if (piVar5 != (int *)0x0) {
      *piVar5 = (int)out_size;
    }
    pvVar4 = _malloc((size_t)out_size);
    *out_data = pvVar4;
    piVar5 = (int *)FUN_00d8ae0b(pvVar4,1,out_size,*(undefined4 *)(iVar1 + 0x10));
    if (piVar5 != out_size) {
      FUN_01535eb0("odb_get: only read %d of %d bytes.",piVar5,out_size);
    }
    piVar5 = (int *)0x0;
    if (out_size != (int *)0x0) {
      do {
        *(byte *)((int)piVar5 + (int)pvVar4) = *(byte *)((int)piVar5 + (int)pvVar4) ^ 0x46;
        piVar5 = (int *)((int)piVar5 + 1);
      } while (piVar5 < out_size);
    }
    return 1;
  }
  return 0;
}

