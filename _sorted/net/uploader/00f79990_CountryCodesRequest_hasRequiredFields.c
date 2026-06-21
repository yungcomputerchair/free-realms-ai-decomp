// addr: 0x00f79990
// name: CountryCodesRequest_hasRequiredFields
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CountryCodesRequest_hasRequiredFields(int this_) */

bool __fastcall CountryCodesRequest_hasRequiredFields(int this_)

{
                    /* Checks that all required CountryCodesRequest string/member pointers are
                       populated before upload processing. */
  if ((((*(int *)(this_ + 0x68) != 0) && (*(int *)(this_ + 0x78) != 0)) &&
      (*(int *)(this_ + 0x48) != 0)) &&
     ((*(int *)(this_ + 0x28) != 0 && (*(int *)(this_ + 8) != 0)))) {
    return *(int *)(this_ + 0x58) != 0;
  }
  return false;
}

