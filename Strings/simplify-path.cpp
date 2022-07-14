class Solution {
public:
    string simplifyPath(string path) {
        path += '/';
        queue<string> dirs;
        deque<string> val_dirs;
        string split = "", canonical = "/";

        for (int i = 1; i < path.length(); ++i)
        {
            if (path[i] == '/')
            {
                if (split.length() != 0)
                {
                    dirs.push(split);
                    split = ""; 
                }

            }
            else split += path[i];

        }
        
        while(!dirs.empty())
        {
            if (dirs.front() == "..")
            {
                if (val_dirs.size() != 0) val_dirs.pop_front();
            }
            else if (dirs.front() == ".");
            else
            {
                val_dirs.push_front(dirs.front());
            }
            dirs.pop();
        }
        
        while(!val_dirs.empty())
        {
            canonical += val_dirs.back();
            val_dirs.pop_back();
            if (val_dirs.size() == 0) continue;
            else canonical += '/';

        }
        
        return canonical;
    }
};
