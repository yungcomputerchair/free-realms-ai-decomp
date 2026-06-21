// addr: 0x010a0740
// name: ManifestRequest_addInternalManifestCrc
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ManifestRequest_addInternalManifestCrc(int * request) */

void __fastcall ManifestRequest_addInternalManifestCrc(int *request)

{
                    /* Adds or requests the INTERNAL manifest.crc resource with a size/limit of 0x20
                       through the object's virtual method. */
  (**(code **)(*request + 0x1c))("manifest.crc","INTERNAL",0x20);
  return;
}

