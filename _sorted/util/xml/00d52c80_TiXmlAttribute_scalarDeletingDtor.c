// addr: 0x00d52c80
// name: TiXmlAttribute_scalarDeletingDtor
// subsystem: common/util/xml
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall TiXmlAttribute_scalarDeletingDtor(void *param_1,byte param_2)

{
                    /* Runs the TiXmlAttribute/TiXmlBase destructor and optionally frees the object
                       when the deleting-destructor flag is set. Evidence: calls the base destructor
                       helper, then frees this when flags&1. */
  FUN_00d51280();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

