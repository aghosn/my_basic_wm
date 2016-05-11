extern "C" {
#include <X11/Xlib.h>
}
#include <memory>

class WindowManager {
    public:
        //Factory method to establish co to an X server and create
        //a WindowManager instance.
        static std::unique_ptr<WindowManager> Create();

        //Disconnects
        ~WindowManager();

        //Entry point
        void Run ();

    private:
        // Private constructor.
        WindowManager(Display display);

        // The Xlib Display struct.
        Display* display_;
        const Window root_;
}
