#using <mscorlib.dll>

void LaunchDll(
    unsigned char* dll, size_t dllLength,
    char const* className, char const* methodName)
{
    // convert passed in parameter to managed values
    cli::array<unsigned char>^ mdll = gcnew cli::array<unsigned char>(dllLength);
    System::Runtime::InteropServices::Marshal::Copy(
        (System::IntPtr)dll, mdll, 0, mdll->Length);
    System::String^ cn =
        System::Runtime::InteropServices::Marshal::PtrToStringAnsi(
            (System::IntPtr)(char*)className);
    System::String^ mn =
        System::Runtime::InteropServices::Marshal::PtrToStringAnsi(
            (System::IntPtr)(char*)methodName);

    // used the converted parameters to load the DLL, find, and call the method.
    System::Reflection::Assembly^ a = System::Reflection::Assembly::Load(mdll);
    a->GetType(cn)->GetMethod(mn)->Invoke(nullptr, nullptr);
}